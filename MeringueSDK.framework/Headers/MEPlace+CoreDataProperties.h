//
//  MEPlace+CoreDataProperties.h
//  meringue
//
//  Created by How Else on 6/12/19.
//  Copyright © 2019 itomych studio. All rights reserved.
//
//

#import "MEPlace.h"


NS_ASSUME_NONNULL_BEGIN

@interface MEPlace (CoreDataProperties)

+ (NSFetchRequest<MEPlace *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *address;
@property (nullable, nonatomic, copy) NSDate *createdAt;
@property (nullable, nonatomic, copy) NSDate *deletedAt;
@property (nullable, nonatomic, copy) NSString *externalId;
@property (nullable, nonatomic, copy) NSNumber *identifier;
@property (nullable, nonatomic, copy) NSNumber *latitude;
@property (nullable, nonatomic, copy) NSString *logoUrl;
@property (nullable, nonatomic, copy) NSNumber *longitude;
@property (nullable, nonatomic, copy) NSString *openingHours;
@property (nullable, nonatomic, copy) NSString *pinUrl;
@property (nullable, nonatomic, copy) NSString *shortText;
@property (nullable, nonatomic, copy) NSString *title;
@property (nullable, nonatomic, copy) NSString *undergroundStation;
@property (nullable, nonatomic, copy) NSDate *updatedAt;
@property (nullable, nonatomic, copy) NSString *uuid;
@property (nullable, nonatomic, retain) NSOrderedSet<MEAttachment *> *photos;
@property (nullable, nonatomic, retain) NSSet<MESchedule *> *schedules;
@property (nullable, nonatomic, retain) NSOrderedSet<MEContact *> *contacts;

@end

@interface MEPlace (CoreDataGeneratedAccessors)

- (void)insertObject:(MEAttachment *)value inPhotosAtIndex:(NSUInteger)idx;
- (void)removeObjectFromPhotosAtIndex:(NSUInteger)idx;
- (void)insertPhotos:(NSArray<MEAttachment *> *)value atIndexes:(NSIndexSet *)indexes;
- (void)removePhotosAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInPhotosAtIndex:(NSUInteger)idx withObject:(MEAttachment *)value;
- (void)replacePhotosAtIndexes:(NSIndexSet *)indexes withPhotos:(NSArray<MEAttachment *> *)values;
- (void)addPhotosObject:(MEAttachment *)value;
- (void)removePhotosObject:(MEAttachment *)value;
- (void)addPhotos:(NSOrderedSet<MEAttachment *> *)values;
- (void)removePhotos:(NSOrderedSet<MEAttachment *> *)values;

- (void)addSchedulesObject:(MESchedule *)value;
- (void)removeSchedulesObject:(MESchedule *)value;
- (void)addSchedules:(NSSet<MESchedule *> *)values;
- (void)removeSchedules:(NSSet<MESchedule *> *)values;

- (void)insertObject:(MEContact *)value inContactsAtIndex:(NSUInteger)idx;
- (void)removeObjectFromContactsAtIndex:(NSUInteger)idx;
- (void)insertContacts:(NSArray<MEContact *> *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeContactsAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInContactsAtIndex:(NSUInteger)idx withObject:(MEContact *)value;
- (void)replaceContactsAtIndexes:(NSIndexSet *)indexes withContacts:(NSArray<MEContact *> *)values;
- (void)addContactsObject:(MEContact *)value;
- (void)removeContactsObject:(MEContact *)value;
- (void)addContacts:(NSOrderedSet<MEContact *> *)values;
- (void)removeContacts:(NSOrderedSet<MEContact *> *)values;

@end

NS_ASSUME_NONNULL_END
