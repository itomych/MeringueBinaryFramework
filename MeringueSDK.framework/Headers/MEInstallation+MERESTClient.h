//
//  MEInstallation+MERESTClient.h
//  meringue
//
//  Created by How Else on 1/4/16.
//  Copyright © 2016 itomych studio. All rights reserved.
//

#import "MEInstallation.h"

#import "MERESTClient.h"


@interface MEInstallation (MERESTClient)
    
/**
 Used for authorization
     
 @param success block to be executed in success case
 @param failure block to be executed in failure case
 @return NSURLSessionDataTask
 */
- (NSURLSessionDataTask *)saveWithSuccess:(void (^)(NSURLSessionDataTask *task, id object))success
                                  failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;
    
/**
 Used for authorization. Updates push token
     
 @param success block to be executed in success case
 @param failure block to be executed in failure case
 @return NSURLSessionDataTask
 */
- (NSURLSessionDataTask *)savePushTokenWithSuccess:(void (^)(NSURLSessionDataTask *task, id object))success
                                           failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;
    
/**
 Used for authorization with device's mac address
     
 @param success block to be executed in success case
 @param failure block to be executed in failure case
 @return NSURLSessionDataTask
 */
- (NSURLSessionDataTask *)saveMacAddressWithSuccess:(void (^)(NSURLSessionDataTask *task, id object))success
                                            failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

@end
