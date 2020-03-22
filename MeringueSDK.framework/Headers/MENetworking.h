//
//  MENetworking.h
//  meringue
//
//  Created by Valery Shilo on 1/5/16.
//  Copyright © 2016 itomych studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MEHTTPSessionManager.h"

@protocol MENetworking <NSObject>

@property (nonatomic) MEHTTPSessionManager *sessionManager;

@end
