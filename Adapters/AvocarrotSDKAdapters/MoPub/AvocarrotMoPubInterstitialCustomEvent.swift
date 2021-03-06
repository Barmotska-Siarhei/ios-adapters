//
//  AvocarrotMoPubInterstitialCustomEvent.swift
//  AvocarrotSDKAdapters
//
//  Created by Glispa GmbH on 03.07.17.
//  Copyright © 2017 Glispa GmbH. All rights reserved.
//

import UIKit
import MoPub
import AvocarrotInterstitial

@objc(AvocarrotMoPubInterstitialCustomEvent)
class AvocarrotMoPubInterstitialCustomEvent: MPInterstitialCustomEvent {
    private var interstitial : AVOInterstitial?

    override func requestInterstitial(withCustomEventInfo info: [AnyHashable : Any]!) {
        guard let adUnitId = info["adUnit"] else {
            requestDidFail()
            return
        }

        AvocarrotSDK.shared.loadInterstitial(withAdUnitId: adUnitId as! String,
                                             success: { [unowned self] (interstitial) in
                                                self.interstitial = self.preparedInterstitialWithCallbacksFor(interstitial: interstitial)
                                                guard let bnr = self.interstitial else {
                                                    let error = NSError(domain: "com.MoPub.CustomEvent", code: 901)
                                                    self.delegate.interstitialCustomEvent(self, didFailToLoadAdWithError: error)
                                                    return
                                                }
                                                self.delegate.interstitialCustomEvent(self, didLoadAd: bnr)
        }) { (error) in
            self.delegate.interstitialCustomEvent(self, didFailToLoadAdWithError: error)
        }
    }


    override func showInterstitial(fromRootViewController rootViewController: UIViewController!) {
        guard let fullscreen = interstitial else {
            return
        }

        fullscreen.show(from: rootViewController)
    }


    private func preparedInterstitialWithCallbacksFor(interstitial: AVOInterstitial?) -> AVOInterstitial? {
        guard let fullscreen = interstitial else {
            return nil
        }

        fullscreen.onWillShow { [unowned self] in
            self.delegate.interstitialCustomEventWillAppear(self)
            }.onDidShow { [unowned self] in
                self.delegate.interstitialCustomEventDidAppear(self)
            }.onWillHide { [unowned self] in
                self.delegate.interstitialCustomEventWillDisappear(self)
            }.onDidHide { [unowned self] in
                self.delegate.interstitialCustomEventDidDisappear(self)
            }.onClick { [unowned self] in
                self.delegate.interstitialCustomEventDidReceiveTap(self)
        }

        return fullscreen
    }

    
    private func requestDidFail() {
        let error = NSError(domain: "com.google.CustomEvent", code: 901)
        self.delegate.interstitialCustomEvent(self, didFailToLoadAdWithError: error)
    }
}
