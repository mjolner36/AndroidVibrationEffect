package com.mjolner.androidvibrationeffect;

import android.content.Context;
import android.os.Build;
import android.os.VibrationEffect;
import android.os.Vibrator;

public class VibrationHelper {

    public static void TriggerVibrationEffect(Context context, int effectId) {
        Vibrator vibrator = (Vibrator) context.getSystemService(Context.VIBRATOR_SERVICE);

        if (vibrator != null && vibrator.hasVibrator()) {
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
                VibrationEffect effect = null;
                switch (effectId) {
                    case 0:
                        effect = VibrationEffect.createPredefined(VibrationEffect.EFFECT_CLICK);
                        break;
                    case 1:
                        effect = VibrationEffect.createPredefined(VibrationEffect.EFFECT_DOUBLE_CLICK);
                        break;
                    case 2:
                        effect = VibrationEffect.createPredefined(VibrationEffect.EFFECT_HEAVY_CLICK);
                        break;
                    case 3:
                        effect = VibrationEffect.createPredefined(VibrationEffect.EFFECT_TICK);
                        break;
                }
                if (effect != null) {
                    vibrator.vibrate(effect);
                }
            } else {
                vibrator.vibrate(50);
            }
        }
    }
}