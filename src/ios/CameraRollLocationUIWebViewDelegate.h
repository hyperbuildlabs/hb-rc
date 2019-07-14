#import "CameraRollLocation.h"
#import "CameraRollLocationWebViewBaseDelegate.h"

@interface CameraRollLocationUIWebViewDelegate: CameraRollLocationWebViewBaseDelegate <CameraRollLocationWebViewDelegate>
@property (readwrite, weak) CameraRollLocationPlugin *plugin;
- (void) onWebViewDidStartLoad;
- (void) onWebViewDidFinishLoad:(UIWebView *)webView;
- (void) onWebViewFailLoadWithError:(NSError *)error;
@end

@interface CameraRollLocationUIWebViewNotificationDelegate : WrappedDelegateProxy <UIWebViewDelegate>
@property (readwrite, weak) CameraRollLocationUIWebViewDelegate *webViewDelegate;
@end
