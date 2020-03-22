//
//  MEAssets.h
//  meringue
//
//  Created by Evgeniy Staroselskiy on 12/25/17.
//  Copyright © 2017 itomych studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MEAsset.h"

@interface MEAssets : NSObject

+ (void)getAssets;
+ (void)getAssetsWithSuccess:(void (^)(NSManagedObjectContext *context, NSArray<MEAsset *> *assets))success
                     failure:(void (^)(NSError *error))failure;

@end
