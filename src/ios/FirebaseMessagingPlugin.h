#import <Cordova/CDV.h>
#import "AppDelegate.h"

@import UserNotifications;
@import Firebase;

@interface FirebaseMessagingPlugin : CDVPlugin<FIRMessagingDelegate, UNUserNotificationCenterDelegate>
- (void)requestPermission:(CDVInvokedUrlCommand*)command;
- (void)revokeToken:(CDVInvokedUrlCommand*)command;
- (void)getToken:(CDVInvokedUrlCommand*)command;
- (void)setBadge:(CDVInvokedUrlCommand*)command;
- (void)getBadge:(CDVInvokedUrlCommand*)command;
- (void)subscribe:(CDVInvokedUrlCommand*)command;
- (void)unsubscribe:(CDVInvokedUrlCommand*)command;
- (void)onMessage:(CDVInvokedUrlCommand*)command;
- (void)onBackgroundMessage:(CDVInvokedUrlCommand*)command;
- (void)onTokenRefresh:(CDVInvokedUrlCommand*)command;
- (void)registerNotifications:(NSError *)error;
- (void)sendNotification:(NSDictionary*)userInfo;
- (void)sendBackgroundNotification:(NSDictionary*)userInfo;

@property (nonatomic, copy) NSString *registerCallbackId;
@property (nonatomic, copy) NSString *notificationCallbackId;
@property (nonatomic, copy) NSString *backgroundNotificationCallbackId;
@property (nonatomic, copy) NSString *tokenRefreshCallbackId;
@property (nonatomic, retain) NSDictionary* lastNotification;

@end