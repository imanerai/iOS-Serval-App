//
//  ContactListViewController.h
//  Serval Chat
//
//  Created by Imane Rai on 14/05/2015.
//  Copyright (c) 2015 Imane Rai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ContactListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>


@property (strong, nonatomic) IBOutlet UITableView *tableView;

@property (strong, nonatomic) NSObject *managedObject;



@property (strong, nonatomic) IBOutlet UINavigationItem *contactUINavigationItem;



@end
