//
//  MECredential.h
//  meringue
//
//  Created by How Else on 5/2/19.
//  Copyright © 2019 itomych studio. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MECredential : NSObject <NSCoding>

@property (nonatomic, copy, nullable, readonly) NSString *accessToken;

@property (nonatomic, copy, nullable) NSString *deviceID;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithToken:(NSString *)token;

- (instancetype)initWithDeviceID:(NSString *)deviceID;

- (nullable NSString *)authorizationHeader;

@end

NS_ASSUME_NONNULL_END
