//
//  MEProduct+Serialization.h
//  meringue
//
//  Created by Evgeniy Staroselskiy on 12/26/17.
//  Copyright © 2017 itomych studio. All rights reserved.
//

#import "MEProduct.h"

@interface MEProduct (Serialization)

+ (instancetype)objectWithAttributes:(NSDictionary *)attributes inManagedObjectContext:(NSManagedObjectContext *)managedObjectContext error:(NSError *__autoreleasing *)error;

- (void)setAttributes:(NSDictionary *)attributes;

@end
