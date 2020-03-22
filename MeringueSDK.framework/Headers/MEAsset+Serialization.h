//
//  MEAsset+Serialization.h
//  meringue
//
//  Created by Evgeniy Staroselskiy on 12/25/17.
//  Copyright © 2017 itomych studio. All rights reserved.
//

#import "MEAsset.h"

@interface MEAsset (Serialization)

+ (instancetype)objectWithAttributes:(NSDictionary *)attributes inManagedObjectContext:(NSManagedObjectContext *)managedObjectContext error:(NSError *__autoreleasing *)error;
+ (NSArray *)arrayOfAssetsFromJSONArray:(NSArray *)array managedObjectContext:(NSManagedObjectContext *)managedObjectContext;

- (void)setAttributes:(NSDictionary *)attributes;

@end
