//
//  MEMessage+FetchRequests.h
//  meringue
//
//  Created by Valery Shilo on 1/6/16.
//  Copyright © 2016 itomych studio. All rights reserved.
//

#import "MEMessage.h"

@interface MEMessage (FetchRequests)

+ (NSFetchRequest *)requestForActiveMessages;

+ (NSArray *)activeMessages;

+ (NSArray *)activeUnreadMessages;

+ (NSUInteger)numberOfUnreadMessages;

@end
