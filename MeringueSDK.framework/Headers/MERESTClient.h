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
    
/**
 Initializes rest client using base url
     
 @param baseURL base url used for configuring server requests
*/
+ (void)initializeWithBaseURL:(NSURL *)baseURL;
    
/**
 Authorizes using credential
     
 @param credential MECredential entity used for authorization
*/
- (void)authorizeWithCredential:(MECredential *)credential;
    
/**
 Authenticates application
     
 @param servcieID id of the configured application service in the admin panel
 @param parameters authentication parameters
 @param success block to be executed in the success case
 @param failure block to be executed in the failure case
*/
- (void)authenticateWithService:(NSString *)servcieID
                     parameters:(id)parameters
                        success:(void (^)(NSURLSessionDataTask *task, MECredential *credential))success
                        failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

@end
