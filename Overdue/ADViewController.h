//
//  ADViewController.h
//  Overdue
//
//  Created by Arturo Dodd Vaudrecourt on 11/4/14.
//  Copyright (c) 2014 Dodd.mx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ADAddTaskViewController.h"

@interface ADViewController : UIViewController <ADAddTaskViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *taskObjects;

@property (strong, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)reorderBarButtonItemPressed:(UIBarButtonItem *)sender;
- (IBAction)addTaskBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
