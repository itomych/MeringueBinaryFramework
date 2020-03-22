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

- (NSURLSessionDataTask *)saveWithSuccess:(void (^)(NSURLSessionDataTask *task, id object))success
                                  failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (NSURLSessionDataTask *)savePushTokenWithSuccess:(void (^)(NSURLSessionDataTask *task, id object))success
                                           failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

- (NSURLSessionDataTask *)saveMacAddressWithSuccess:(void (^)(NSURLSessionDataTask *task, id object))success
                                            failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

@end
