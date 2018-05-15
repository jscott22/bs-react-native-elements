[@bs.module "react-native-elements"]
external card : ReasonReact.reactClass = "Card";

type image = {uri: string};

let make =
    (
      ~flexDirection=?,
      ~containerStyle=?,
      ~wrapperStyle=?,
      ~imageWrapperStyle=?,
      ~title=?,
      ~titleStyle=?,
      ~titleNumberOfLines=?,
      ~featuredTitle=?,
      ~featuredTitleStyle=?,
      ~featuredSubtitle=?,
      ~featuredSubtitleStyle=?,
      ~dividerStyle=?,
      ~image=?,
      ~imageStyle=?,
      ~fontFamily=?,
      ~imageProps=?,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=card,
    ~props=
      Js.Undefined.(
        {
          "flexDirection": fromOption(flexDirection),
          "containerStyle": containerStyle,
          "wrapperStyle": fromOption(wrapperStyle),
          "imageWrapperStyle": fromOption(imageWrapperStyle),
          "title": fromOption(title),
          "titleStyle": fromOption(titleStyle),
          "titleNumberOfLines": fromOption(titleNumberOfLines),
          "featuredTitle": fromOption(featuredTitle),
          "featuredTitleStyle": fromOption(featuredTitleStyle),
          "featuredSubtitle": fromOption(featuredSubtitle),
          "featuredSubtitleStyle": fromOption(featuredSubtitleStyle),
          "dividerStyle": fromOption(dividerStyle),
          "image": fromOption(image),
          "imageStyle": fromOption(imageStyle),
          "fontFamily": fromOption(fontFamily),
          "imageProps": fromOption(imageProps),
        }
      ),
  );
