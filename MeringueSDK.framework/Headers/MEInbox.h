//
//  MEInbox.h
//  meringue
//
//  Created by How Else on 4/28/15.
//  Copyright (c) 2015 itomych studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MEMessage+StateManagement.h"
#import "MEMessage+FetchRequests.h"

@interface MEInbox : NSObject

/**
 Executes server request to fecth messages
 */
+ (void)getMessages;

/**
 Retreives messages from the server
 
 @param success block to be executed in success case
 @param failure block to be executed in failure case
 */
+ (void)getMessagesWithSuccess:(void (^)(NSManagedObjectContext *context, NSArray<MEMessage *> *messages))success failure:(void (^)(NSError *))failure;

/**
 @return array with messages
 */
+ (NSArray *)allMessages;

/**
 @return array with all active messages
 */
+ (NSArray *)allActiveMessages;

+ (NSUInteger)numberOfUnreadMessages;

+ (void)deleteAllMessages;

+ (void)markAllMessagesAsSeen;

+ (void)markAllUnreadMessagesAsSeen;

+ (void)markAllMessagesAsDeleted;

@end
