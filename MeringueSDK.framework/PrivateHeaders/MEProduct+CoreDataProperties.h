//
//  MEProduct+CoreDataProperties.h
//  meringue
//
//  Created by Evgeniy Staroselskiy on 12/25/17.
//  Copyright © 2017 itomych studio. All rights reserved.
//

#import "MEProduct.h"

NS_ASSUME_NONNULL_BEGIN

@interface MEProduct (CoreDataProperties)

+ (NSFetchRequest<MEProduct *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *url;
@property (nullable, nonatomic, copy) NSString *productId;

@end

NS_ASSUME_NONNULL_END
