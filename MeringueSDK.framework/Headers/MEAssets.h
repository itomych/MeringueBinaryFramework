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
    
/**
 Sends request to the server for fetching MEAsset objects
 */
+ (void)getAssets;
/**
 Sends request to the server for fetching MEAsset objects
     
 @param success block to be executed if request was completed successfully
 @param failure block to be executed if request was completed with error
 */
+ (void)getAssetsWithSuccess:(void (^)(NSManagedObjectContext *context, NSArray<MEAsset *> *assets))success
                     failure:(void (^)(NSError *error))failure;

@end
