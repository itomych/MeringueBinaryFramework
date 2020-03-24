//
//  MEMessage+Serialization.h
//  meringue
//
//  Created by Valery Shilo on 1/5/16.
//  Copyright © 2016 itomych studio. All rights reserved.
//

#import "MEMessage.h"

@interface MEMessage (Serialization)
/**
 Creates array with MEAsset objects from server response
 
 @param array array array with json values
 @param managedObjectContext managedObjectContext context to be used with perform block
 @return array of MEMessage objects
 */
+ (NSArray *)arrayOfMessagesFromJSONArray:(NSArray *)array managedObjectContext:(NSManagedObjectContext *)managedObjectContext;
    
/**
 Fills object with attributes (linkName, shortText, body)
     
 @param attributes attributes to be set
 */
- (void)setAttributes:(NSDictionary *)attributes;

@end
