//
//  MEMessageWebViewController.h
//  meringue
//
//  Created by How Else on 1/22/19.
//  Copyright © 2019 itomych studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import <SafariServices/SafariServices.h>
#import "MEMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface MEMessageWebViewController : UIViewController <WKNavigationDelegate>

@property (nonatomic, strong) MEMessage *message;

@property (nonatomic, strong, readonly) WKWebView *webView;

- (NSString *)HTMLBodyString;

- (NSString *)HTMLString;

- (nullable NSURL *)messageHTMLTemplateURL;

- (void)openURL:(NSURL *)URL;

- (void)presentSafariViewControllerWithURL:(NSURL *)URL;

@end

NS_ASSUME_NONNULL_END
