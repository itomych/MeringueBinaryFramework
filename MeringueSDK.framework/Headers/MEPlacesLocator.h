//
//  MEPlacesLocator.h
//  meringue
//
//  Created by Valery Shilo on 5/30/17.
//  Copyright © 2017 itomych studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MEPlace.h"

@interface MEPlacesLocator : NSObject

+ (void)getPlaces;
+ (void)getPlacesWithSuccess:(void (^)(NSManagedObjectContext *context, NSArray<MEPlace *> *places))success
                     failure:(void (^)(NSError *error))failure;

@end
