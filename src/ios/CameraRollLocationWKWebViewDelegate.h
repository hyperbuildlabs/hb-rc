#import <WebKit/WebKit.h>
#import "CameraRollLocation.h"
#import "CameraRollLocationWebViewBaseDelegate.h"

@interface CameraRollLocationWKWebViewDelegate: CameraRollLocationWebViewBaseDelegate <CameraRollLocationWebViewDelegate>
@property (readwrite, weak) CameraRollLocationPlugin *plugin;
- (void) onWebViewDidFinishLoad:(WKWebView *)webView;
- (void) onWebViewDidStartProvisionalNavigation;
- (void) onWebViewDidFailNavigation:(NSError *)error;
@end

@interface CameraRollLocationWKWebViewNavigationDelegate: WrappedDelegateProxy <WKNavigationDelegate>
@property (readwrite, weak) CameraRollLocationWKWebViewDelegate *webViewDelegate;
@end
