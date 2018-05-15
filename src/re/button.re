[@bs.module "react-native-elements"]
external button : ReasonReact.reactClass = "Button";

let make =
    (
      ~touchableComponent=?,
      ~containerStyle=?,
      ~onPress=?,
      ~buttonStyle=?,
      ~clear=?,
      ~loading=?,
      ~loadingStyle=?,
      ~loadingProps=?,
      ~title=?,
      ~titleProps=?,
      ~titleStyle=?,
      ~icon=?,
      ~iconContainerStyle=?,
      ~iconRight=?,
      ~disabled=?,
      ~disabledStyle=?,
      ~disabledTitleStyle=?,
      ~raised=?,
      ~linearGradientProps=?,
      ~backgroundColor=?,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=button,
    ~props=
      Js.Undefined.(
        {
          "touchableComponent": fromOption(touchableComponent),
          "containerStyle": fromOption(containerStyle),
          "onPress": fromOption(onPress),
          "buttonStyle": fromOption(buttonStyle),
          "clear": fromOption(clear),
          "loading": fromOption(loading),
          "loadingStyle": fromOption(loadingStyle),
          "loadingProps": fromOption(loadingProps),
          "title": fromOption(title),
          "titleProps": fromOption(titleProps),
          "titleStyle": fromOption(titleStyle),
          "icon": fromOption(icon),
          "iconContainerStyle": fromOption(iconContainerStyle),
          "iconRight": fromOption(iconRight),
          "disabled": fromOption(disabled),
          "disabledStyle": fromOption(disabledStyle),
          "disabledTitleStyle": fromOption(disabledTitleStyle),
          "raised": fromOption(raised),
          "linearGradientProps": fromOption(linearGradientProps),
          "backgroundColor": fromOption(backgroundColor),
        }
      ),
  );
