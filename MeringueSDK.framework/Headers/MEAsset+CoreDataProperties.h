//
//  MEAsset+CoreDataProperties.h
//  meringue
//
//  Created by Evgeniy Staroselskiy on 12/25/17.
//  Copyright © 2017 itomych studio. All rights reserved.
//

#import "MEAsset.h"

NS_ASSUME_NONNULL_BEGIN

@interface MEAsset (CoreDataProperties)

+ (NSFetchRequest<MEAsset *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSDate *createdAt;
@property (nullable, nonatomic, copy) NSDate *deletedAt;
@property (nullable, nonatomic, copy) NSDate *updatedAt;
@property (nullable, nonatomic, copy) NSNumber *identifier;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, copy) NSString *uuid;
@property (nullable, nonatomic, copy) NSNumber *typeId;
@property (nullable, nonatomic, copy) NSString *value;

@end

NS_ASSUME_NONNULL_END


