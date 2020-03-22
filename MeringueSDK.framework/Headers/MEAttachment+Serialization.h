//
//  MEAttachment+Serialization.h
//  meringue
//
//  Created by Mykhailo Sorokin on 2/8/19.
//  Copyright © 2019 itomych studio. All rights reserved.
//

#import "MEAttachment.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString *const MEAttachmentEntityName;

@interface MEAttachment (Serialization)

+ (NSOrderedSet *)setOfAttachmentsFromJSONArray:(NSArray *)array managedObjectContext:(NSManagedObjectContext *)managedObjectContext;

@end

NS_ASSUME_NONNULL_END
