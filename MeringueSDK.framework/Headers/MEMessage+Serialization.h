//
//  MEMessage+Serialization.h
//  meringue
//
//  Created by Valery Shilo on 1/5/16.
//  Copyright © 2016 itomych studio. All rights reserved.
//

#import "MEMessage.h"

@interface MEMessage (Serialization)

+ (NSArray *)arrayOfMessagesFromJSONArray:(NSArray *)array managedObjectContext:(NSManagedObjectContext *)managedObjectContext;

- (void)setAttributes:(NSDictionary *)attributes;

@end
