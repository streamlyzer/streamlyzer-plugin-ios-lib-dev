
#import <AVFoundation/AVFoundation.h>
#import "SZRObserver.h"
#import "SZRPluginPlaybackEventDelegate.h"
#import "SZRPlaybackObserver.h"

typedef NS_ENUM(NSUInteger, SZRPlayerType) {
    SZRPlayerTypeGeneric
    , SZRPlayerTypeAVPlayer
    , SZRPlayerTypeMPMoviePlayer
};

@interface SZRPlaybackObserver : NSObject
<SZRObserver, SZRPluginPlaybackEventDelegate>
{
}

@property (weak) id<SZRPluginPlaybackEventDelegate> delegate;

/**
 @brief This method shall be called when media player is initiated
 */
-(void) onInitialization;

/**
 * @brief This method shall be called when media player is loaded
 */
-(void) onPlayerLoad;
/**
 @brief This method shall be called when media player is ready to play
 */
-(void) onPlayerReady;
/**
 @brief This method shall be called when trying to play
 */
-(void) onPlayerPlay;
/**
 @brief This method shall be called when media player is started to play
 */
-(void) onPlayerPlaying;

/**
 @brief This method shall be called when media player is paused
 */
-(void) onPlayerPause;
/**
 @brief This method shall be called when the seek is started
 
 @param position The current postion of playing in millisecond unit
 @param offset The offset from current position to seek position in milisecond unit
 */
-(void) onPlayerSeek: (NSInteger) position withOffset: (NSInteger) offset;
/**
 @brief This method shall bre called when the seeking is done
 
 Streamlyzer Plugin remembers previous status (pause or playing) and gets back to previous status. You may not need to call this function after seeking. Streamlyzer Plugin will change status intenally when other API such as playing or pause is called.
 */
-(void) onPlayerSeeked;
/**
 @brief This method shall be called when bit rate of video is changed
 
 @param bitrate It shall be "kpbs" unit. For example, bit rate is 512kbp. this parameter shall be 512
 */
-(void) onPlayerBitrateChange : (NSInteger) bitrate;
/**
 @brief This method shall be called when resolution of video is changed
 
 */
-(void) onPlayerResolutionChange;
/**
 @brief This method shall be called when buffering is started during playback
 */
-(void) onBufferingStart;
/**
 @brief This method shall be called when buffering is done.
 
 It is not nessary to call it after onBufferingStart. The internal state will be changed when other API is called
 */
-(void) onBufferingEnded;
/**
 @brief This method shall be called when any error in media player is occurred
 
 @param errorMessage Error message to be sent
 */
-(void) onPlayerErrorMessage : (NSString *) errorMessage;
/**
 @brief This method shall be called when playback is completed
 */
-(void) onPlayerComplete;
/**
 @brief This method is called when media player is stopped
 */
-(void) onPlayerStop;
/**
 @brief This methos is call when channel is changed or play next content in playlist
 */
-(void) onPlayNext;
//
@end


