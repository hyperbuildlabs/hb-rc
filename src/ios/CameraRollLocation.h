//
//  CameraRollLocation.h
//

#import <Cordova/CDVPlugin.h>

@interface CameraRollLocationPlugin : CDVPlugin
@property (readonly) NSArray *injectFirstFiles;
/*
From CRIPageLoadPromptInterval preference.  Wait period in seconds before prompting the
end user about a slow request.  Default is 10 which feels safe.  Off by default
doesn't seem correct.  To disable the dialog completely set to 0.
*/
@property (readonly) NSInteger promptInterval;
/*
From CRIShowConnectionErrorDialog preference.  Defaults to true.  False if preference
is set to 0.
 */
@property (readonly) BOOL showConnectionErrorDialog;
    
- (id) findWebView;
@end

@protocol CameraRollLocationWebViewDelegate <NSObject>
- (void) initializeDelegate:(CameraRollLocationPlugin *)plugin;
@end
