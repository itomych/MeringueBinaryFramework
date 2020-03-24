//
//  Meringue.h
//  meringue
//
//  Created by How Else on 4/28/15.
//  Copyright (c) 2015 itomych studio. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Meringue : NSObject

/**
 
 
 @param URLString base url
 @param applicationKey application key
 */
+ (void)setBaseURLString:(NSString *)URLString
          applicationKey:(NSString *)applicationKey;

/**
 Sets application identidier
 
 @param identifier identifier of the application
 */
+ (void)setApplicationIdentifier:(NSString *)identifier;

+ (void)setMacAddressURLString:(NSString *)URLString;

+ (void)setDeviceToken:(NSData *)deviceToken;

+ (void)setPushToken:(NSString *)pushToken;

+ (void)authorize;

/**
 Authorizes Meringue with configurted service
 
 @param servcieID id of the configured service
 @param parameters authorization parameters fetched from your server
 */
+ (void)authorizeUserWithService:(NSString *)servcieID
                      parameters:(id)parameters;

+ (BOOL)isUserUnauthorized;

+ (void)enablePushNotifications;
+ (void)disablePushNotifications;

+ (void)reset;

@end
