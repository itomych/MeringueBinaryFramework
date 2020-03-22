//
//  MEMessage+CoreDataProperties.h
//  meringue
//
//  Created by Anatolij klimenko on 11/18/16.
//  Copyright © 2016 itomych studio. All rights reserved.
//

#import "MEMessage.h"


NS_ASSUME_NONNULL_BEGIN

@interface MEMessage (CoreDataProperties)

+ (NSFetchRequest<MEMessage *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *body;
@property (nullable, nonatomic, copy) NSDate *createdAt;
@property (nullable, nonatomic, copy) NSDate *expiredAt;
@property (nullable, nonatomic, copy) NSNumber *identifier;
@property (nullable, nonatomic, copy) NSString *linkName;
@property (nullable, nonatomic, copy) NSNumber *markedAsDeleted;
@property (nullable, nonatomic, copy) NSString *shortText;
@property (nullable, nonatomic, copy) NSNumber *seen;
@property (nullable, nonatomic, copy) NSString *title;
@property (nullable, nonatomic, copy) NSDate *updatedAt;
@property (nullable, nonatomic, copy) NSString *linkUrl;

@end

NS_ASSUME_NONNULL_END
