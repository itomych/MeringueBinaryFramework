//
//  MEKeyStore.h
//  meringue
//
//  Created by How Else on 5/2/19.
//  Copyright © 2019 itomych studio. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MECredential;

@interface MEKeyStore<ObjectType> : NSObject

+ (MEKeyStore<MECredential *> *)credentialStore;

- (instancetype)init NS_UNAVAILABLE;

- (nullable ObjectType)object;
- (void)saveObject:(ObjectType<NSCoding>)object;
- (void)removeObject;

@end

NS_ASSUME_NONNULL_END
