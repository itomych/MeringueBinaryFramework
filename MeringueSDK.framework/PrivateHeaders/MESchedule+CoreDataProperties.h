//
//  MESchedule+CoreDataProperties.h
//  meringue
//
//  Created by Valery Shilo on 6/5/17.
//  Copyright © 2017 itomych studio. All rights reserved.
//

#import "MESchedule.h"


NS_ASSUME_NONNULL_BEGIN

@interface MESchedule (CoreDataProperties)

+ (NSFetchRequest<MESchedule *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *formatName;
@property (nullable, nonatomic, copy) NSNumber *formatId;
@property (nullable, nonatomic, copy) NSNumber *typeId;
@property (nullable, nonatomic, copy) NSString *typeName;
@property (nullable, nonatomic, copy) NSString *shortText;
@property (nullable, nonatomic, retain) MEPlace *place;

@end

NS_ASSUME_NONNULL_END
