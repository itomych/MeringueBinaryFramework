//
//  MEAttachment+CoreDataProperties.h
//  meringue
//
//  Created by Mykhailo Sorokin on 2/8/19.
//  Copyright © 2019 itomych studio. All rights reserved.
//
//

#import "MEAttachment.h"


NS_ASSUME_NONNULL_BEGIN

@interface MEAttachment (CoreDataProperties)

+ (NSFetchRequest<MEAttachment *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *urlString;
@property (nullable, nonatomic, retain) MEPlace *place;

@end

NS_ASSUME_NONNULL_END
