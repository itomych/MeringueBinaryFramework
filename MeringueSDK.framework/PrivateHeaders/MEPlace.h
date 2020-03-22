//
//  MEPlace.h
//  meringue
//
//  Created by Valery Shilo on 5/30/17.
//  Copyright © 2017 itomych studio. All rights reserved.
//

#import "MEManagedObject.h"

@class MEAttachment, MEContact, MESchedule;

NS_ASSUME_NONNULL_BEGIN

extern NSString *const MEPlaceEntityName;

@interface MEPlace : MEManagedObject

@end

NS_ASSUME_NONNULL_END

#import "MEPlace+CoreDataProperties.h"
