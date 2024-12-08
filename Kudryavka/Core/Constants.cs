using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Device.Gpio;
using System.Reflection;

namespace Kudryavka.Core
{
    internal static class Constants
    {
        //アプリケーション名
        public static string ApplicationName = "Kudryavka";
        //アプリケーションバージョン
        public static string ApplicationVersion = Assembly.GetExecutingAssembly().GetName().Version?.ToString() ?? "Unknown Version";
        //開発者情報
        public static string Developer = "SARD";
        public static string Coding = "Shintaro Niwa";

        //GPIOの設定
        //ピンアサイン
        public const int PinNumber = 17;
    }
}
