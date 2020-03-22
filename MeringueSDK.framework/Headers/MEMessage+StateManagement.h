//
//  MEMessage+StateManagement.h
//  meringue
//
//  Created by Valery Shilo on 1/8/16.
//  Copyright © 2016 itomych studio. All rights reserved.
//

#import "MEMessage.h"

@interface MEMessage (StateManagement)

- (void)markAsSeen;

- (void)markAsDeleted;

@end
