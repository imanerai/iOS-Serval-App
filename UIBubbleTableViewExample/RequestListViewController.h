//
//  RequestListViewController.h
//  Serval Chat
//
//  Created by Imane Rai on 1/05/2015.
//  Copyright (c) 2015 Imane Rai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SetRequestViewController.h"

@interface RequestListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) IBOutlet UITableView *tableView;

@property (strong, nonatomic) IBOutlet UINavigationItem *requestUINavigationItem;

@end



