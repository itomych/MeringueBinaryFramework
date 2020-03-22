//
//  MERESTClient.h
//  meringue
//
//  Created by How Else on 4/28/15.
//  Copyright (c) 2015 itomych studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MEHTTPSessionManager.h"

@class MECredential;

@interface MERESTClient : NSObject

@property (strong, nonatomic, readonly) MEHTTPSessionManager *sessionManager;

@property (copy, nonatomic) NSString *identifier;

@property (copy, nonatomic) NSString *token;

@property (copy, nonatomic) NSString *secret;

@property (copy, nonatomic) NSURL *macAddressUrl;

+ (instancetype)sharedClient;

+ (void)initializeWithBaseURL:(NSURL *)baseURL;

- (void)authorizeWithCredential:(MECredential *)credential;

- (void)authenticateWithService:(NSString *)servcieID
                     parameters:(id)parameters
                        success:(void (^)(NSURLSessionDataTask *task, MECredential *credential))success
                        failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

@end
