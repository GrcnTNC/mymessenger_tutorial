//
//  MessagingEditChannelListViewController.h
//  MyMessenger
//
//  Created by Jed Kyung on 12/12/15.
//  Copyright © 2015 JIVER.CO. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AFNetworking/AFNetworking.h>
#import <AFNetworking/UIImageView+AFNetworking.h>
#import <JiverSDK/JiverSDK.h>

#import "MyUtils.h"
#import "MessagingViewController.h"
#import "MessagingEditListTableViewCell.h"

@interface MessagingEditChannelListViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITableView *messagingChannelListTableView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *channelLoadingIndicator;

@property (nonatomic, weak) id <MessagingViewControllerDelegate> delegate;

@end
