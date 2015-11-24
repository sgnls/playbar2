// This file is generated by kconfig_compiler_kf5 from playbar.kcfg.
// All changes you do to this file will be lost.

#include "playbarsettings.h"

#include <qglobal.h>
#include <QtCore/QFile>

class PlayBarSettingsHelper
{
  public:
    PlayBarSettingsHelper() : q(0) {}
    ~PlayBarSettingsHelper() { delete q; }
    PlayBarSettings *q;
};
Q_GLOBAL_STATIC(PlayBarSettingsHelper, s_globalPlayBarSettings)
PlayBarSettings *PlayBarSettings::self()
{
  if (!s_globalPlayBarSettings()->q) {
    new PlayBarSettings;
    s_globalPlayBarSettings()->q->read();
  }

  return s_globalPlayBarSettings()->q;
}

PlayBarSettings::PlayBarSettings(  )
  : KConfigSkeleton( QLatin1String( "playbarrc" ) )
{
  Q_ASSERT(!s_globalPlayBarSettings()->q);
  s_globalPlayBarSettings()->q = this;
  setCurrentGroup( QLatin1String( "General" ) );

  KConfigSkeleton::ItemBool  *itemShowStop;
  itemShowStop = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "ShowStop" ), mShowStop, true );
  itemShowStop->setLabel( QCoreApplication::translate("PlayBarSettings", "Show stop button") );
  addItem( itemShowStop, QLatin1String( "ShowStop" ) );
  KConfigSkeleton::ItemBool  *itemControlsOnBar;
  itemControlsOnBar = new KConfigSkeleton::ItemBool( currentGroup(), QLatin1String( "ControlsOnBar" ), mControlsOnBar, true );
  itemControlsOnBar->setLabel( QCoreApplication::translate("PlayBarSettings", "Playback controls on the bar") );
  addItem( itemControlsOnBar, QLatin1String( "ControlsOnBar" ) );
  QList<KConfigSkeleton::ItemEnum::Choice> valuesButtonsAppearance;
  KConfigSkeleton::ItemEnum  *itemButtonsAppearance;
  itemButtonsAppearance = new KConfigSkeleton::ItemEnum( currentGroup(), QLatin1String( "ButtonsAppearance" ), mButtonsAppearance, valuesButtonsAppearance, 0 );
  itemButtonsAppearance->setLabel( QCoreApplication::translate("PlayBarSettings", "Buttons appearance") );
  addItem( itemButtonsAppearance, QLatin1String( "ButtonsAppearance" ) );
  QList<KConfigSkeleton::ItemEnum::Choice> valuesBackgroundHint;
  KConfigSkeleton::ItemEnum  *itemBackgroundHint;
  itemBackgroundHint = new KConfigSkeleton::ItemEnum( currentGroup(), QLatin1String( "BackgroundHint" ), mBackgroundHint, valuesBackgroundHint, 1 );
  itemBackgroundHint->setLabel( QCoreApplication::translate("PlayBarSettings", "Background hints") );
  addItem( itemBackgroundHint, QLatin1String( "BackgroundHint" ) );
}

PlayBarSettings::~PlayBarSettings()
{
  s_globalPlayBarSettings()->q = 0;
}
