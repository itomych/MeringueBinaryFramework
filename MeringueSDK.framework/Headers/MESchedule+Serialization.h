//
//  MESchedule+Serialization.h
//  meringue
//
//  Created by Valery Shilo on 6/5/17.
//  Copyright © 2017 itomych studio. All rights reserved.
//

#import "MESchedule.h"

extern NSString *const MEScheduleEntityName;
@interface MESchedule (Serialization)

+ (NSSet *)setOfSchedulesFromJSONArray:(NSArray *)array managedObjectContext:(NSManagedObjectContext *)managedObjectContext;

- (void)setAttributes:(NSDictionary *)attributes;

@end
