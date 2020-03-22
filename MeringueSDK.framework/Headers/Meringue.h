//
//  Meringue.h
//  meringue
//
//  Created by How Else on 4/28/15.
//  Copyright (c) 2015 itomych studio. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Meringue : NSObject

+ (void)setBaseURLString:(NSString *)URLString
          applicationKey:(NSString *)applicationKey;

+ (void)setApplicationIdentifier:(NSString *)identifier;

+ (void)setMacAddressURLString:(NSString *)URLString;

+ (void)setDeviceToken:(NSData *)deviceToken;

+ (void)setPushToken:(NSString *)pushToken;

+ (void)authorize;

+ (void)authorizeUserWithService:(NSString *)servcieID
                      parameters:(id)parameters;

+ (BOOL)isUserUnauthorized;

+ (void)enablePushNotifications;
+ (void)disablePushNotifications;

+ (void)reset;

@end
