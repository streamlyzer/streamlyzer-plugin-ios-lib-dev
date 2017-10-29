#import <Foundation/Foundation.h>

@protocol SZRPluginPlaybackEventDelegate <NSObject>

@required
- (NSInteger) getPosition;

@optional
- (NSInteger) getBitrate;
- (NSString *) getResolution;
- (NSInteger) getDuration;
@end
