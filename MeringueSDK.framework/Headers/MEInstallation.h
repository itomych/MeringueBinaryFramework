//
//  MEInstallation.h
//  meringue
//
//  Created by How Else on 4/28/15.
//  Copyright (c) 2015 itomych studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MEObject.h"

@interface MEInstallation : MEObject

+ (instancetype)currentInstallation;

@property (strong, nonatomic, readonly) NSString *deviceUDID;
@property (strong, nonatomic) NSString *deviceMac;
@property (strong, nonatomic) NSString *pushToken;
@property (nonatomic, getter=isPushNotificationsDisabled) BOOL pushNotificationsDisabled;

@end
