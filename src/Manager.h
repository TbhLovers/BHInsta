#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BHIManager : NSObject

+ (BOOL)hideAds;
+ (BOOL)downloadVideos;
+ (BOOL)profileImageSave;
+ (BOOL)removeSuggestedPost;
+ (BOOL)removeSuggestedAccounts;
+ (BOOL)removeSuggestedReels;
+ (BOOL)removeFeedPost;
+ (bool)removeExplorePost;
+ (BOOL)showLikeCount;
+ (BOOL)postLikeConfirmation;
+ (BOOL)reelsLikeConfirmation;
+ (BOOL)followConfirmation;
+ (BOOL)callConfirmation;
+ (BOOL)voiceMessageConfirmation;
+ (BOOL)stickerInteractConfirmation;
+ (BOOL)postCommentConfirmation;
+ (BOOL)copyDecription;
+ (BOOL)removeReelsTab;
+ (BOOL)noRecentSearches;
+ (BOOL)Padlock;
+ (BOOL)keepDeletedMessage;
+ (BOOL)hideLastSeen;
+ (BOOL)noScreenShotAlert;
+ (BOOL)unlimitedReplay;
+ (BOOL)noSeenReceipt;
+ (BOOL)FLEX;

+ (void)showSaveVC:(id)item;
+ (void)cleanCache;
+ (BOOL)isEmpty:(NSURL *)url;
+ (NSString *)getDownloadingPersent:(float)per;

@end