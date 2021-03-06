//
//  ScheduleDetailViewController.h
//  CCIP
//
//  Created by 腹黒い茶 on 2017/07/21.
//  Copyright © 2017年 CPRTeam. All rights reserved.
//

@import FSPagerView;

#import <UIKit/UIKit.h>
#import "ScheduleAbstractViewCell.h"
#import "ScheduleSpeakerInfoViewCell.h"

#define INIT_SCHEDULE_DETAIL_VIEW_STORYBOARD_ID (@"ScheduleDetail")
#define SCHEDULE_DETAIL_VIEW_STORYBOARD_ID      (@"ShowScheduleDetail")

@interface ScheduleDetailViewController : UIViewController<UITableViewDelegate,FSPagerViewDelegate,FSPagerViewDataSource>

@property (weak, nonatomic) IBOutlet UITableView *tvContent;
@property (weak, nonatomic) IBOutlet FSPagerView *vwHeader;
@property (weak, nonatomic) IBOutlet UIView *vwMeta;
@property (weak, nonatomic) IBOutlet UILabel *lbSpeaker;
@property (weak, nonatomic) IBOutlet UILabel *lbSpeakerName;
@property (weak, nonatomic) IBOutlet UILabel *lbTitle;
@property (weak, nonatomic) IBOutlet UILabel *lbRoom;
@property (weak, nonatomic) IBOutlet UILabel *lbRoomText;
@property (weak, nonatomic) IBOutlet UILabel *lbType;
@property (weak, nonatomic) IBOutlet UILabel *lbTypeText;
@property (weak, nonatomic) IBOutlet UILabel *lbTime;
@property (weak, nonatomic) IBOutlet UILabel *lbTimeText;

- (void)setDetailData:(NSDictionary *)data;

@end
