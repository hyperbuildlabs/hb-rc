#import <WebKit/WebKit.h>
#import "CordovaFileNet.h"
#import "CordovaFileNetWebViewBaseDelegate.h"

@interface CordovaFileNetWKWebViewDelegate: CordovaFileNetWebViewBaseDelegate <CordovaFileNetWebViewDelegate>
@property (readwrite, weak) CordovaFileNetPlugin *plugin;
- (void) onWebViewDidFinishLoad:(WKWebView *)webView;
- (void) onWebViewDidStartProvisionalNavigation;
- (void) onWebViewDidFailNavigation:(NSError *)error;
@end

@interface CordovaFileNetWKWebViewNavigationDelegate: WrappedDelegateProxy <WKNavigationDelegate>
@property (readwrite, weak) CordovaFileNetWKWebViewDelegate *webViewDelegate;
@end
