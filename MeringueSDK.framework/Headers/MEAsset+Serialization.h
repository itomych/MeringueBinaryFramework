//
//  MEAsset+Serialization.h
//  meringue
//
//  Created by Evgeniy Staroselskiy on 12/25/17.
//  Copyright © 2017 itomych studio. All rights reserved.
//

#import "MEAsset.h"

@interface MEAsset (Serialization)
    
/**
 Serializes response inro MEAsset object
     
 @param attributes dictionary with values to be serialized
 @param managedObjectContext context to be inserted into
 @param error error if occured
 @return instance of MEAsset
*/
+ (instancetype)objectWithAttributes:(NSDictionary *)attributes inManagedObjectContext:(NSManagedObjectContext *)managedObjectContext error:(NSError *__autoreleasing *)error;
    
/**
 Creates array with MEAsset objects from server response
     
 @param array array with json values
 @param managedObjectContext context to be used with perform block
 @return array of MEAsset objects
*/
+ (NSArray *)arrayOfAssetsFromJSONArray:(NSArray *)array managedObjectContext:(NSManagedObjectContext *)managedObjectContext;
    
/**
 Fills object with attributes (name, uuid, etc)
     
 @param attributes attributes to be set
*/
- (void)setAttributes:(NSDictionary *)attributes;

@end
