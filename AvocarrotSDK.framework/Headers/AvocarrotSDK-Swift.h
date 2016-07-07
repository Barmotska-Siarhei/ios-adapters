// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"


/// Achoices model implementation, included in any BaseModel
SWIFT_CLASS("_TtC12AvocarrotSDK9AdChoices")
@interface AdChoices : NSObject

/// Returns the AdChoices icon url
///
/// \returns  the absolute String of the adChoices icon url
- (NSString * _Nonnull)getIconUrl;

/// Returns the AdChoices redirection url
///
/// \returns  the absolute String of the adChoices redirection url
- (NSString * _Nonnull)getRedirectionUrl;
@end



/// Used for error reporting
SWIFT_CLASS("_TtC12AvocarrotSDK7AdError")
@interface AdError : NSObject

/// Returns the error description
///
/// Returns: the error description String
- (NSString * _Nonnull)getDescription;

/// Returns the error code
///
/// Returns: the error code String
- (NSString * _Nonnull)getCode;
@end

enum MediationType : NSInteger;
@class CustomModel;
@class UIView;
@class TargetModel;
enum LogLevel : NSInteger;
@class BaseModel;


/// Class that exposes AvocarrotCustom to Objc
SWIFT_CLASS_NAMED("AvocarrotCustomObjc")
@interface AvocarrotCustom : NSObject

/// Initialize
- (nonnull instancetype)initWithApiKey:(NSString * _Nonnull)apiKey placementKey:(NSString * _Nonnull)placementKey mediationType:(enum MediationType)mediationType OBJC_DESIGNATED_INITIALIZER;

/// Register callback to be called when ad is loaded
///
/// \param adloaded a function with void return type and a CustomModel as parameter
- (AvocarrotCustom * _Nonnull)onAdLoaded:(void (^ _Nonnull)(NSArray<CustomModel *> * _Nonnull))adloaded;

/// Register callback to be called on ad error
///
/// \param adError a function with void return type and an AdError as parameter
- (AvocarrotCustom * _Nonnull)onAdError:(void (^ _Nonnull)(AdError * _Nonnull))adError;

/// Register callback to be called when the ad view is clicked
///
/// \param adViewClicked a function with void return type and an UIView as parameter
- (AvocarrotCustom * _Nonnull)onAdViewClicked:(void (^ _Nonnull)(UIView * _Nonnull))adViewClicked;

/// Register callback to be called when the ad click is registered and tracked
///
/// \param adClickRegistered a function with void return type
- (AvocarrotCustom * _Nonnull)onAdClickRegistered:(void (^ _Nonnull)(void))adClickRegistered;

/// Register callback to be called when the adChoices view is clicked
///
/// \param adChoicesClicked a function with void return type and an UIView as parameter
- (AvocarrotCustom * _Nonnull)onAdChoicesClicked:(void (^ _Nonnull)(UIView * _Nonnull))adChoicesClicked;

/// Register callback to be called on ad impression
///
/// \param adImpresion a function with void return type
- (AvocarrotCustom * _Nonnull)onAdImpression:(void (^ _Nonnull)(void))adImpresion;

/// Register callback to be called when the webview closes
///
/// \param adWebViewClosed a function with void return type
- (AvocarrotCustom * _Nonnull)onAdWebViewClosed:(void (^ _Nonnull)(void))adWebViewClosed;

/// Adds targeting data to ad request
///
/// \param targetModel a TargetModel instance
- (AvocarrotCustom * _Nonnull)withTargetingData:(TargetModel * _Nonnull)targetModel;

/// Switch between sandbox and live mode
- (AvocarrotCustom * _Nonnull)withSandbox:(BOOL)sandbox;

/// Set User logging level
///
/// \param enableLogging true to enable logging
///
/// \param logLevel the LogLevel of the logger
- (AvocarrotCustom * _Nonnull)withLogging:(BOOL)enableLogging logLevel:(enum LogLevel)logLevel;

/// Loads the ad
///
/// <ul><li>Paremeter preloading:  does nothing at the moment</li></ul>
- (void)loadAd;

/// Binds the view and the model and registers them to the impression controller
///
/// \param uiView the UIView that will be binded
///
/// \param ad the BaseModel that will be binded
- (void)bindView:(UIView * _Nonnull)view ad:(BaseModel * _Nonnull)ad;

/// Handles the click call to action, used when the user has his on click listener
///
/// \param viewController the root UIViewController (optional)
///
/// \param ad the BaseModel that is clicked
- (void)handleClick:(BaseModel * _Nonnull)ad;

/// Adds a click listener to the adChoices view
///
/// \param uiView the UIView that the listener is registered
///
/// \param ad the BaseModel binded at this view
- (void)registerAdChoicesListener:(UIView * _Nonnull)uiView ad:(BaseModel * _Nonnull)ad;

/// Removes click listener from the adChoices view
///
/// \param uiView the UIView that has the click listener
- (void)removeAdChoicesListener:(UIView * _Nonnull)uiView;

/// Adds a click listener to a view
///
/// \param uiView the UIView that the listener is registered
///
/// \param ad the BaseModel binded at this view
- (void)registerClickListener:(UIView * _Nonnull)uiView ad:(BaseModel * _Nonnull)ad;

/// Removes click listener from the view
///
/// \param uiView the UIView that has the click listener
- (void)removeClickListener:(UIView * _Nonnull)uiView;
@end



/// BaseModel Implementation
SWIFT_CLASS("_TtC12AvocarrotSDK9BaseModel")
@interface BaseModel : NSObject

/// Initialize
- (nonnull instancetype)initWithJsonObject:(NSDictionary<NSString *, id> * _Nonnull)jsonObject requestId:(NSString * _Nullable)requestId OBJC_DESIGNATED_INITIALIZER;
@end



/// CustomModel implementation extending BaseModel
SWIFT_CLASS("_TtC12AvocarrotSDK11CustomModel")
@interface CustomModel : BaseModel

/// \returns  the ad description
- (NSString * _Nonnull)getDescription;

/// \returns  the call to action text
- (NSString * _Nonnull)getCTAText;

/// \returns  the destination url
- (NSString * _Nonnull)getDestinationUrl;

/// \returns  the title
- (NSString * _Nonnull)getTitle;

/// \returns  the start rating (range [0.0,5.0])
- (double)getRating;

/// \returns  the ad main image url
- (NSString * _Nonnull)getImage;

/// \returns  the ad icon image url
- (NSString * _Nonnull)getIcon;

/// \returns  the adchoices model if the ad has one
- (AdChoices * _Nullable)getAdChoices;
- (nonnull instancetype)initWithJsonObject:(NSDictionary<NSString *, id> * _Nonnull)jsonObject requestId:(NSString * _Nullable)requestId OBJC_DESIGNATED_INITIALIZER;
@end


/// Gender type based on the OpenRTB standard
typedef SWIFT_ENUM(NSInteger, Gender) {

/// Male Gender
  GenderMale = 0,

/// Male Gender
  GenderFemale = 1,

/// Male Gender
  GenderOther = 2,
};


/// Used to set the logging level to a Logger object
typedef SWIFT_ENUM(NSInteger, LogLevel) {

/// Log errors only
  LogLevelError = 0,

/// Log errors only
  LogLevelWarning = 1,

/// Log errors only
  LogLevelInfo = 2,

/// Log errors only
  LogLevelDebug = 3,
};


/// MediationType implementation
typedef SWIFT_ENUM(NSInteger, MediationType) {

/// No Mediation
  MediationTypeNoMediation = 0,

/// No Mediation
  MediationTypeMopub = 1,
};


/// StatusCode implementation
typedef SWIFT_ENUM(NSInteger, StatusCode) {

/// Success status
  StatusCodeSuccess = 0,

/// Success status
  StatusCodeForbidden = 1,

/// Success status
  StatusCodeNotFound = 2,

/// Success status
  StatusCodeNoInternetConnection = 3,

/// Success status
  StatusCodeNoAdServed = 4,
};



/// Targeting model implementation used to keep targeting data
SWIFT_CLASS("_TtC12AvocarrotSDK11TargetModel")
@interface TargetModel : NSObject
@end



/// TargetModelBuilder implementation used to build TargetModels
SWIFT_CLASS("_TtC12AvocarrotSDK18TargetModelBuilder")
@interface TargetModelBuilder : NSObject

/// Sets the year of birth to the target model
- (TargetModelBuilder * _Nonnull)withYearOfBirth:(NSInteger)yearOfBirth;

/// Sets the gender to the target model
- (TargetModelBuilder * _Nonnull)withGender:(enum Gender)gender;

/// Sets the age to the target model
- (TargetModelBuilder * _Nonnull)withAge:(NSInteger)age;

/// Builds the TargetModel
///
/// Returns: a TargetModel object
- (TargetModel * _Nonnull)build;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSError;

@interface UIImageView (SWIFT_EXTENSION(AvocarrotSDK))

/// Loads the specific image url into @self.
///
/// \param urlString absolute string of the image url
///
/// \param scaleToImageSize if true the container (@self) trims to image size
///
/// \param onImageLoad callback called when image successfully loads
///
/// \param onImageLoadError callback called on every error except NSURLErrorCancelled
- (void)loadImage:(NSString * _Nonnull)urlString scaleToImageSize:(BOOL)scaleToImageSize onImageLoad:(void (^ _Nullable)(void))onImageLoad onImageLoadError:(void (^ _Nullable)(NSError * _Nonnull nsError))onImageLoadError;
@end


@interface UIView (SWIFT_EXTENSION(AvocarrotSDK))
@end

#pragma clang diagnostic pop
