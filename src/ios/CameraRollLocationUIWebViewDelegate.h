#import "CordovaFileNet.h"
#import "CordovaFileNetWebViewBaseDelegate.h"

@interface CordovaFileNetUIWebViewDelegate: CordovaFileNetWebViewBaseDelegate <CordovaFileNetWebViewDelegate>
@property (readwrite, weak) CordovaFileNetPlugin *plugin;
- (void) onWebViewDidStartLoad;
- (void) onWebViewDidFinishLoad:(UIWebView *)webView;
- (void) onWebViewFailLoadWithError:(NSError *)error;
@end

@interface CordovaFileNetUIWebViewNotificationDelegate : WrappedDelegateProxy <UIWebViewDelegate>
@property (readwrite, weak) CordovaFileNetUIWebViewDelegate *webViewDelegate;
@end
