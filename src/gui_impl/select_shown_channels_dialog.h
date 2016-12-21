// Copyright (c) 2016 The SigViewer Development Team
// Licensed under the GNU General Public License (GPL)
// https://www.gnu.org/licenses/gpl


#ifndef SELECT_SHOWN_CHANNELS_DIALOG_H
#define SELECT_SHOWN_CHANNELS_DIALOG_H

#include "base/sigviewer_user_types.h"
#include "file_handling/channel_manager.h"

#include <QDialog>

#include <set>

class QListWidget;
class QPushButton;

namespace sigviewer
{

class SelectShownChannelsDialog : public QDialog
{
    Q_OBJECT
public:
    SelectShownChannelsDialog (QString const& dialog_title,
                               std::set<ChannelID> const& channels,
                               ChannelManager const& channel_manager);

    std::set<ChannelID> getSelectedChannels () const;

private:
    SelectShownChannelsDialog ();
    SelectShownChannelsDialog (const SelectShownChannelsDialog&);
    const SelectShownChannelsDialog& operator= (const SelectShownChannelsDialog&);

    std::set<ChannelID> channels_;
    QListWidget* channel_list_widget_;
    QPushButton* ok_button_;
    QPushButton* cancel_button_;
};

}

#endif // SELECT_SHOWN_CHANNELS_DIALOG_H
