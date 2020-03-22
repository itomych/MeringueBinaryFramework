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

+ (void)getMessages;

+ (void)getMessagesWithSuccess:(void (^)(NSManagedObjectContext *context, NSArray<MEMessage *> *messages))success failure:(void (^)(NSError *))failure;

+ (NSArray *)allMessages;

+ (NSArray *)allActiveMessages;

+ (NSUInteger)numberOfUnreadMessages;

+ (void)deleteAllMessages;

+ (void)markAllMessagesAsSeen;

+ (void)markAllUnreadMessagesAsSeen;

+ (void)markAllMessagesAsDeleted;

@end
