//
//  MEContact+CoreDataProperties.h
//  meringue
//
//  Created by How Else on 6/12/19.
//  Copyright © 2019 itomych studio. All rights reserved.
//
//

#import "MEContact.h"


NS_ASSUME_NONNULL_BEGIN

@interface MEContact (CoreDataProperties)

+ (NSFetchRequest<MEContact *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *value;
@property (nullable, nonatomic, copy) NSNumber *type;
@property (nullable, nonatomic, retain) MEPlace *place;

@end

NS_ASSUME_NONNULL_END
